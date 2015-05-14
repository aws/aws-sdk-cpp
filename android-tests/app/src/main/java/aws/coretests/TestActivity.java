package aws.coretests;

import android.support.v7.app.ActionBarActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.util.Log;
import android.os.AsyncTask;
import android.app.Activity;

public class TestActivity extends ActionBarActivity {

    class TestTask extends AsyncTask<String, Void, Boolean> {

        private Activity m_source;

        public TestTask(Activity taskSource)
        {
            m_source = taskSource;
        }

        protected Boolean doInBackground(String... libraryNames) {
            String libraryName = libraryNames[ 0 ];

            Log.i("AwsNativeSDK", "Loading library " + libraryName);

            System.loadLibrary(libraryName);
            Log.i("AwsNativeSDK", "Starting  tests");

            boolean success = runTests() == 0;
            if(success) {
                Log.i("AwsNativeSDK", "Tests Succeeded!");
            } else {
                Log.i("AwsNativeSDK", "Tests Failed =(");
            }

            return success;
        }

        protected void onPostExecute(Boolean testsSucceeded)
        {
            Log.i("AwsNativeSDK", "Shutting down TestActivity");
            m_source.finish();
        }
    }

    public native int runTests();

    @Override
    public void onDestroy()
    {
        super.onDestroy();
        Log.i("AwsNativeSDK", "OnDestroy called!");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_test);

        new TestTask(this).execute("android-unified-tests");
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_test, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
