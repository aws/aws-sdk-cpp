/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BillingGroupProperties.h>
#include <aws/iot/model/BillingGroupMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class DescribeBillingGroupResult
  {
  public:
    AWS_IOT_API DescribeBillingGroupResult() = default;
    AWS_IOT_API DescribeBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const { return m_billingGroupName; }
    template<typename BillingGroupNameT = Aws::String>
    void SetBillingGroupName(BillingGroupNameT&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::forward<BillingGroupNameT>(value); }
    template<typename BillingGroupNameT = Aws::String>
    DescribeBillingGroupResult& WithBillingGroupName(BillingGroupNameT&& value) { SetBillingGroupName(std::forward<BillingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupId() const { return m_billingGroupId; }
    template<typename BillingGroupIdT = Aws::String>
    void SetBillingGroupId(BillingGroupIdT&& value) { m_billingGroupIdHasBeenSet = true; m_billingGroupId = std::forward<BillingGroupIdT>(value); }
    template<typename BillingGroupIdT = Aws::String>
    DescribeBillingGroupResult& WithBillingGroupId(BillingGroupIdT&& value) { SetBillingGroupId(std::forward<BillingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const { return m_billingGroupArn; }
    template<typename BillingGroupArnT = Aws::String>
    void SetBillingGroupArn(BillingGroupArnT&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::forward<BillingGroupArnT>(value); }
    template<typename BillingGroupArnT = Aws::String>
    DescribeBillingGroupResult& WithBillingGroupArn(BillingGroupArnT&& value) { SetBillingGroupArn(std::forward<BillingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the billing group.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline DescribeBillingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the billing group.</p>
     */
    inline const BillingGroupProperties& GetBillingGroupProperties() const { return m_billingGroupProperties; }
    template<typename BillingGroupPropertiesT = BillingGroupProperties>
    void SetBillingGroupProperties(BillingGroupPropertiesT&& value) { m_billingGroupPropertiesHasBeenSet = true; m_billingGroupProperties = std::forward<BillingGroupPropertiesT>(value); }
    template<typename BillingGroupPropertiesT = BillingGroupProperties>
    DescribeBillingGroupResult& WithBillingGroupProperties(BillingGroupPropertiesT&& value) { SetBillingGroupProperties(std::forward<BillingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the billing group.</p>
     */
    inline const BillingGroupMetadata& GetBillingGroupMetadata() const { return m_billingGroupMetadata; }
    template<typename BillingGroupMetadataT = BillingGroupMetadata>
    void SetBillingGroupMetadata(BillingGroupMetadataT&& value) { m_billingGroupMetadataHasBeenSet = true; m_billingGroupMetadata = std::forward<BillingGroupMetadataT>(value); }
    template<typename BillingGroupMetadataT = BillingGroupMetadata>
    DescribeBillingGroupResult& WithBillingGroupMetadata(BillingGroupMetadataT&& value) { SetBillingGroupMetadata(std::forward<BillingGroupMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBillingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;

    Aws::String m_billingGroupId;
    bool m_billingGroupIdHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    BillingGroupProperties m_billingGroupProperties;
    bool m_billingGroupPropertiesHasBeenSet = false;

    BillingGroupMetadata m_billingGroupMetadata;
    bool m_billingGroupMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
