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
    AWS_GLACIER_API ListVaultsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVaults"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListVaultsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used for pagination. The marker specifies the vault ARN after which
     * the listing of vaults should begin.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListVaultsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of vaults to be returned. The default limit is 10. The
     * number of vaults returned might be fewer than the specified limit, but the
     * number of returned vaults never exceeds the limit.</p>
     */
    inline const Aws::String& GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    template<typename LimitT = Aws::String>
    void SetLimit(LimitT&& value) { m_limitHasBeenSet = true; m_limit = std::forward<LimitT>(value); }
    template<typename LimitT = Aws::String>
    ListVaultsRequest& WithLimit(LimitT&& value) { SetLimit(std::forward<LimitT>(value)); return *this;}
    ///@}
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
