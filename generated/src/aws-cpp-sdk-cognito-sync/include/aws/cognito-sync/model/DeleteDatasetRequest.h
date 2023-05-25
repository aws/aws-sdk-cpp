/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * A request to delete the specific dataset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DeleteDatasetRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDatasetRequest : public CognitoSyncRequest
  {
  public:
    AWS_COGNITOSYNC_API DeleteDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataset"; }

    AWS_COGNITOSYNC_API Aws::String SerializePayload() const override;


    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline DeleteDatasetRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline DeleteDatasetRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline DeleteDatasetRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline DeleteDatasetRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline DeleteDatasetRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline DeleteDatasetRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline DeleteDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline DeleteDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline DeleteDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}

  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
