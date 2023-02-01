/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> The request structure for the create a new deployment request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeploymentRequest">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline CreateDeploymentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline CreateDeploymentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline CreateDeploymentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline CreateDeploymentRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline CreateDeploymentRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> The name for the branch, for the job. </p>
     */
    inline CreateDeploymentRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFileMap() const{ return m_fileMap; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline bool FileMapHasBeenSet() const { return m_fileMapHasBeenSet; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline void SetFileMap(const Aws::Map<Aws::String, Aws::String>& value) { m_fileMapHasBeenSet = true; m_fileMap = value; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline void SetFileMap(Aws::Map<Aws::String, Aws::String>&& value) { m_fileMapHasBeenSet = true; m_fileMap = std::move(value); }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& WithFileMap(const Aws::Map<Aws::String, Aws::String>& value) { SetFileMap(value); return *this;}

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& WithFileMap(Aws::Map<Aws::String, Aws::String>&& value) { SetFileMap(std::move(value)); return *this;}

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(const Aws::String& key, const Aws::String& value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(key, value); return *this; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(Aws::String&& key, const Aws::String& value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(std::move(key), value); return *this; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(const Aws::String& key, Aws::String&& value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(Aws::String&& key, Aws::String&& value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(const char* key, Aws::String&& value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(Aws::String&& key, const char* value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(std::move(key), value); return *this; }

    /**
     * <p> An optional file map that contains the file name as the key and the file
     * content md5 hash as the value. If this argument is provided, the service will
     * generate a unique upload URL per file. Otherwise, the service will only generate
     * a single upload URL for the zipped files. </p>
     */
    inline CreateDeploymentRequest& AddFileMap(const char* key, const char* value) { m_fileMapHasBeenSet = true; m_fileMap.emplace(key, value); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_fileMap;
    bool m_fileMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
