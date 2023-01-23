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
   * <p>Provides options to retrieve the vault list owned by the calling user's
   * account. The list provides metadata information for each vault.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListVaultsInput">AWS
   * API Reference</a></p>
   */
  class ListVaultsRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API ListVaultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVaults"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline ListVaultsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline ListVaultsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline ListVaultsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline ListVaultsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline ListVaultsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline ListVaultsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline const Aws::String& GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline void SetLimit(const Aws::String& value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline void SetLimit(Aws::String&& value) { m_limitHasBeenSet = true; m_limit = std::move(value); }

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline void SetLimit(const char* value) { m_limitHasBeenSet = true; m_limit.assign(value); }

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline ListVaultsRequest& WithLimit(const Aws::String& value) { SetLimit(value); return *this;}

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline ListVaultsRequest& WithLimit(Aws::String&& value) { SetLimit(std::move(value)); return *this;}

    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline ListVaultsRequest& WithLimit(const char* value) { SetLimit(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
