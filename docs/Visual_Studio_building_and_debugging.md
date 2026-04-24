In this guide we will be setting up and running this ["Hello S3" application](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/build-cmake.html) in Visual Studio. This was tested with Visual Studio 2022 on Windows 10, but should work on other versions. First, we will start with building this SDK in Visual Studio.

1. Clone this repository with submodules
  ```sh
  git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp
  ```
2. Open the aws-sdk-cpp folder in Visual Studio
3. Configure CMake Settings
   - Open CMakeSettings.json by clicking on `Project` and then `CMake Settings for AWSSDK` (You might need to wait a few seconds for Visual Studio to generate the file)
     
      ![3 1 CMakeSettings](https://github.com/aws/aws-sdk-cpp/assets/5644066/c8e817c7-6819-4b6b-8c42-4370fb896b6e)

   - Add the following to `CMake command arguments`
      ```sh
      -DBUILD_ONLY="s3"
      ```

      ![3 2 Command arguments](https://github.com/aws/aws-sdk-cpp/assets/5644066/59ea6e46-4e3c-452e-bf88-d790af8f2e7d)

   - Other [CMake parameters](https://github.com/aws/aws-sdk-cpp/blob/main/docs/CMake_Parameters.md) can be added, but for this example we only need the above.
   - Change any other CMake settings for the aws-sdk-cpp at this time. e.g., Configuration type, Build root, Install directory, etc. (But you can leave them as default for this guide)
   - You can also change the cmake generator by clicking on `Show advanced settings` and selecting the generator that you want from the list. (`Visual Studio 17 2022` works and is a decent choice if you don't know which to pick)
   - Note: The install directory defaults to `${projectDir}\out\install\${name}` rather than the aws-sdk-cpp default on Windows of `\Program Files (x86)\aws-cpp-sdk-all`.
4. Click `Save and generate CMake cache to load variables` to do the same (or press Ctrl+S on CMakeSettings.json)

    ![4 1 Save and generate CMake](https://github.com/aws/aws-sdk-cpp/assets/5644066/26385400-4448-42de-9022-8e317f999b7f)

- Note: If you select a Visual Studio generator (rather than the default `ninja`), you will generate a solution file (.sln). You can then open this file as a project and complete the build and install steps from there. Before you build and install you will want to right click `ALL_BUILD` in the Solution Explorer and click `Set s Startup Project`

5. Build this SDK by clicking on `Build` and then `Build All`

    ![5 1 Build](https://github.com/aws/aws-sdk-cpp/assets/5644066/5812ad57-dc84-424d-8ec2-ac58853fb229)

6. Install the SDK by clicking on `Build` and then `Install AWSSDK`

    ![6 1 Install](https://github.com/aws/aws-sdk-cpp/assets/5644066/66345cad-5ba7-4c44-8b82-0ca717b279c5)


You have now successfully built and installed the aws-sdk-cpp. Now we will build and debug a "Hello S3" application.

1. Follow `Step 1: Write the code` from the developer guide [here](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/build-cmake.html).
   - Create a hello_s3 directory and/or project to hold your source files.
   - Within that folder, add a hello_s3.cpp file that includes the following code, which reports the Amazon S3 buckets you own. (Find code in above link)
   - Add a CMakeLists.txt file that specifies your project’s name, executables, source files, and linked libraries. (Find code in above link)
2. Now, if you haven't already, open up the folder with the sample application in a new Visual Studio window
3. Configure CMake Settings
    - Open CMakeSettings.json by clicking on `Project` and then `CMake Settings for hello_s3`
  
       ![3 1 CMakeSettings 2](https://github.com/aws/aws-sdk-cpp/assets/5644066/d8bb3753-1d7f-4d6b-851d-7648f54f5098)

    - Add the following to `CMake command arguments`
      ```sh
      -DCMAKE_PREFIX_PATH="<path to installed location from above>"
      ```
      ![3 2 Command arguments 2](https://github.com/aws/aws-sdk-cpp/assets/5644066/84975cc5-1c71-4846-bed1-d3d206554c47)

   - Change any other CMake settings for your project at this time, if needed.
4. Click `Save and generate CMake cache to load variables` to do the same (or press Ctrl+S on CMakeSettings.json)

    ![4 1 Save and generate CMake](https://github.com/aws/aws-sdk-cpp/assets/5644066/fe021159-f797-430d-8554-3c33e37f8f1b)

5. Change the startup item to `hello_s3.exe` by clicking the drop-down arrow next to the green play button

    ![5 1 Startup item](https://github.com/aws/aws-sdk-cpp/assets/5644066/8a866b76-19db-4c0e-901e-2b7be8548710)
  
  
6. Build the sample by clicking on `Build` and then `Build hello_s3.exe`

    ![6 1 Build hello_s3](https://github.com/aws/aws-sdk-cpp/assets/5644066/87cabc53-3c86-42c4-b65d-5317a0c6e519)
   
7. Run the sample by clicking the green play button next to `hello_s3.exe`
8. Debug and use the SDK to your heart's content!
