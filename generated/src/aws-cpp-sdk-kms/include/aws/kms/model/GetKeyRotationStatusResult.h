/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KMS
{
namespace Model
{
  class GetKeyRotationStatusResult
  {
  public:
    AWS_KMS_API GetKeyRotationStatusResult() = default;
    AWS_KMS_API GetKeyRotationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetKeyRotationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline bool GetKeyRotationEnabled() const { return m_keyRotationEnabled; }
    inline void SetKeyRotationEnabled(bool value) { m_keyRotationEnabledHasBeenSet = true; m_keyRotationEnabled = value; }
    inline GetKeyRotationStatusResult& WithKeyRotationEnabled(bool value) { SetKeyRotationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GetKeyRotationStatusResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days between each automatic rotation. The default value is 365
     * days.</p>
     */
    inline int GetRotationPeriodInDays() const { return m_rotationPeriodInDays; }
    inline void SetRotationPeriodInDays(int value) { m_rotationPeriodInDaysHasBeenSet = true; m_rotationPeriodInDays = value; }
    inline GetKeyRotationStatusResult& WithRotationPeriodInDays(int value) { SetRotationPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next date that KMS will automatically rotate the key material.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const { return m_nextRotationDate; }
    template<typename NextRotationDateT = Aws::Utils::DateTime>
    void SetNextRotationDate(NextRotationDateT&& value) { m_nextRotationDateHasBeenSet = true; m_nextRotationDate = std::forward<NextRotationDateT>(value); }
    template<typename NextRotationDateT = Aws::Utils::DateTime>
    GetKeyRotationStatusResult& WithNextRotationDate(NextRotationDateT&& value) { SetNextRotationDate(std::forward<NextRotationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the date and time that an in progress on-demand rotation was
     * initiated.</p> <p>KMS uses a background process to perform rotations. As a
     * result, there might be a slight delay between initiating on-demand key rotation
     * and the rotation's completion. Once the on-demand rotation is complete, KMS
     * removes this field from the response. You can use <a>ListKeyRotations</a> to
     * view the details of the completed on-demand rotation.</p>
     */
    inline const Aws::Utils::DateTime& GetOnDemandRotationStartDate() const { return m_onDemandRotationStartDate; }
    template<typename OnDemandRotationStartDateT = Aws::Utils::DateTime>
    void SetOnDemandRotationStartDate(OnDemandRotationStartDateT&& value) { m_onDemandRotationStartDateHasBeenSet = true; m_onDemandRotationStartDate = std::forward<OnDemandRotationStartDateT>(value); }
    template<typename OnDemandRotationStartDateT = Aws::Utils::DateTime>
    GetKeyRotationStatusResult& WithOnDemandRotationStartDate(OnDemandRotationStartDateT&& value) { SetOnDemandRotationStartDate(std::forward<OnDemandRotationStartDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKeyRotationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_keyRotationEnabled{false};
    bool m_keyRotationEnabledHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    int m_rotationPeriodInDays{0};
    bool m_rotationPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_nextRotationDate{};
    bool m_nextRotationDateHasBeenSet = false;

    Aws::Utils::DateTime m_onDemandRotationStartDate{};
    bool m_onDemandRotationStartDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
