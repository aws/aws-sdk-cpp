/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class DescribeLabelGroupResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    DescribeLabelGroupResult& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const { return m_labelGroupArn; }
    template<typename LabelGroupArnT = Aws::String>
    void SetLabelGroupArn(LabelGroupArnT&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::forward<LabelGroupArnT>(value); }
    template<typename LabelGroupArnT = Aws::String>
    DescribeLabelGroupResult& WithLabelGroupArn(LabelGroupArnT&& value) { SetLabelGroupArn(std::forward<LabelGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFaultCodes() const { return m_faultCodes; }
    template<typename FaultCodesT = Aws::Vector<Aws::String>>
    void SetFaultCodes(FaultCodesT&& value) { m_faultCodesHasBeenSet = true; m_faultCodes = std::forward<FaultCodesT>(value); }
    template<typename FaultCodesT = Aws::Vector<Aws::String>>
    DescribeLabelGroupResult& WithFaultCodes(FaultCodesT&& value) { SetFaultCodes(std::forward<FaultCodesT>(value)); return *this;}
    template<typename FaultCodesT = Aws::String>
    DescribeLabelGroupResult& AddFaultCodes(FaultCodesT&& value) { m_faultCodesHasBeenSet = true; m_faultCodes.emplace_back(std::forward<FaultCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time at which the label group was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeLabelGroupResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DescribeLabelGroupResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLabelGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelGroupArn;
    bool m_labelGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_faultCodes;
    bool m_faultCodesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
