In this guide we will be setting up and running this ["Hello S3" application](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/build-cmake.html) in Visual Studio. This was tested with Visual Studio 2022 on Windows 10, but should work on other versions. First we will start with building this sdk in Visual Studio.

1. Clone this repository with submoduels
  ```sh
  git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp
  ```
2. Open aws-sdk-cpp folder in Visual Studio
3. Configure CMake Settings
   - Open CMakeSettings.json by clicking on `Project` and then `CMake Settings for AWSSDK`
   - Add this to `CMake command arguments`
      ```sh
      -DBUILD_ONLY="s3"
      ```
   - Other [CMake parameters](https://github.com/aws/aws-sdk-cpp/blob/main/docs/CMake_Parameters.md) can be added, but for this example we only need the above
   - Change any other CMake settings for the aws-sdk-cpp at this time. i.e: Configuration type, Build root, Install directory, etc. (But you can leave them as default for this guide)
   - Note: Install dicectory defaults to `${projectDir}\out\install\${name}` rather than the aws-sdk-cpp default on Windows of `\Program Files (x86)\aws-cpp-sdk-all`.
4. Click `Save and generate CMake cache to load variables` to do the same (or press ctrl-s on CMakeSettings.json)
5. Build this sdk by clicking on `Build` and then `Build All`
6. Install this sdk by clicking on `Build` and then `Install AWSSDK`

You have now successfully built and installed the aws-sdk-cpp. Now we will build and debug a "Hello S3" application.

1. Follow `Step 1: Write the code` from the developer guide [here](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/build-cmake.html)
   - Create a hello_s3 directory and/or project to hold your source files.
   - Within that folder, add a hello_s3.cpp file that includes the following code, which reports the Amazon S3 buckets you own. (Find code in above link)
   - Add a CMakeLists.txt file that specifies your project’s name, executables, source files, and linked libraries. (Find code in above link)
2. Now if you haven't already open up the folder with the sample application in a new Visual Studio window
3. Configure CMake Settings
    - Open CMakeSettings.json by clicking on `Project` and then `CMake Settings for hello_s3`
    - Add this to `CMake command arguments`
      ```sh
      -DCMAKE_PREFIX_PATH="<path to installed location from above>"
      ```
   - Change any other CMake settings for your project at this time.
4. Click `Save and generate CMake cache to load variables` to do the same (or press ctrl-s on CMakeSettings.json)
5. Change startup item to `hello_s3.exe` by clicking drop down arrow next to green play button
6. Build this sample bu clicking on `Build` and then `Build hello_s3.exe`
7. Run the sample by clicking the green play next to `hello_s3.exe`
8. Debug and use this sdk to your hearts content!
