/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for retrieving a list of parts of an archive that have been
   * uploaded in a specific multipart upload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListPartsInput">AWS
   * API Reference</a></p>
   */
  class ListPartsRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API ListPartsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListParts"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListPartsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListPartsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListPartsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }
    inline ListPartsRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}
    inline ListPartsRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}
    inline ListPartsRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID of the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline ListPartsRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline ListPartsRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline ListPartsRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An opaque string used for pagination. This value specifies the part at which
     * the listing of parts should begin. Get the marker value from the response of a
     * previous List Parts response. You need only include the marker if you are
     * continuing the pagination of results started in a previous List Parts
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline ListPartsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListPartsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListPartsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of parts to be returned. The default limit is 50. The
     * number of parts returned might be fewer than the specified limit, but the number
     * of returned parts never exceeds the limit.</p>
     */
    inline const Aws::String& GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(const Aws::String& value) { m_limitHasBeenSet = true; m_limit = value; }
    inline void SetLimit(Aws::String&& value) { m_limitHasBeenSet = true; m_limit = std::move(value); }
    inline void SetLimit(const char* value) { m_limitHasBeenSet = true; m_limit.assign(value); }
    inline ListPartsRequest& WithLimit(const Aws::String& value) { SetLimit(value); return *this;}
    inline ListPartsRequest& WithLimit(Aws::String&& value) { SetLimit(std::move(value)); return *this;}
    inline ListPartsRequest& WithLimit(const char* value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
