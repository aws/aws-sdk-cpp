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
    AWS_KMS_API GetKeyRotationStatusResult();
    AWS_KMS_API GetKeyRotationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetKeyRotationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline bool GetKeyRotationEnabled() const{ return m_keyRotationEnabled; }

    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline void SetKeyRotationEnabled(bool value) { m_keyRotationEnabled = value; }

    /**
     * <p>A Boolean value that specifies whether key rotation is enabled.</p>
     */
    inline GetKeyRotationStatusResult& WithKeyRotationEnabled(bool value) { SetKeyRotationEnabled(value); return *this;}


    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline GetKeyRotationStatusResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline GetKeyRotationStatusResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the specified symmetric encryption KMS key.</p>
     */
    inline GetKeyRotationStatusResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The number of days between each automatic rotation. The default value is 365
     * days.</p>
     */
    inline int GetRotationPeriodInDays() const{ return m_rotationPeriodInDays; }

    /**
     * <p>The number of days between each automatic rotation. The default value is 365
     * days.</p>
     */
    inline void SetRotationPeriodInDays(int value) { m_rotationPeriodInDays = value; }

    /**
     * <p>The number of days between each automatic rotation. The default value is 365
     * days.</p>
     */
    inline GetKeyRotationStatusResult& WithRotationPeriodInDays(int value) { SetRotationPeriodInDays(value); return *this;}


    /**
     * <p>The next date that KMS will automatically rotate the key material.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRotationDate() const{ return m_nextRotationDate; }

    /**
     * <p>The next date that KMS will automatically rotate the key material.</p>
     */
    inline void SetNextRotationDate(const Aws::Utils::DateTime& value) { m_nextRotationDate = value; }

    /**
     * <p>The next date that KMS will automatically rotate the key material.</p>
     */
    inline void SetNextRotationDate(Aws::Utils::DateTime&& value) { m_nextRotationDate = std::move(value); }

    /**
     * <p>The next date that KMS will automatically rotate the key material.</p>
     */
    inline GetKeyRotationStatusResult& WithNextRotationDate(const Aws::Utils::DateTime& value) { SetNextRotationDate(value); return *this;}

    /**
     * <p>The next date that KMS will automatically rotate the key material.</p>
     */
    inline GetKeyRotationStatusResult& WithNextRotationDate(Aws::Utils::DateTime&& value) { SetNextRotationDate(std::move(value)); return *this;}


    /**
     * <p>Identifies the date and time that an in progress on-demand rotation was
     * initiated.</p> <p>The KMS API follows an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-eventual-consistency.html">eventual
     * consistency</a> model due to the distributed nature of the system. As a result,
     * there might be a slight delay between initiating on-demand key rotation and the
     * rotation's completion. Once the on-demand rotation is complete, use
     * <a>ListKeyRotations</a> to view the details of the on-demand rotation.</p>
     */
    inline const Aws::Utils::DateTime& GetOnDemandRotationStartDate() const{ return m_onDemandRotationStartDate; }

    /**
     * <p>Identifies the date and time that an in progress on-demand rotation was
     * initiated.</p> <p>The KMS API follows an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-eventual-consistency.html">eventual
     * consistency</a> model due to the distributed nature of the system. As a result,
     * there might be a slight delay between initiating on-demand key rotation and the
     * rotation's completion. Once the on-demand rotation is complete, use
     * <a>ListKeyRotations</a> to view the details of the on-demand rotation.</p>
     */
    inline void SetOnDemandRotationStartDate(const Aws::Utils::DateTime& value) { m_onDemandRotationStartDate = value; }

    /**
     * <p>Identifies the date and time that an in progress on-demand rotation was
     * initiated.</p> <p>The KMS API follows an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-eventual-consistency.html">eventual
     * consistency</a> model due to the distributed nature of the system. As a result,
     * there might be a slight delay between initiating on-demand key rotation and the
     * rotation's completion. Once the on-demand rotation is complete, use
     * <a>ListKeyRotations</a> to view the details of the on-demand rotation.</p>
     */
    inline void SetOnDemandRotationStartDate(Aws::Utils::DateTime&& value) { m_onDemandRotationStartDate = std::move(value); }

    /**
     * <p>Identifies the date and time that an in progress on-demand rotation was
     * initiated.</p> <p>The KMS API follows an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-eventual-consistency.html">eventual
     * consistency</a> model due to the distributed nature of the system. As a result,
     * there might be a slight delay between initiating on-demand key rotation and the
     * rotation's completion. Once the on-demand rotation is complete, use
     * <a>ListKeyRotations</a> to view the details of the on-demand rotation.</p>
     */
    inline GetKeyRotationStatusResult& WithOnDemandRotationStartDate(const Aws::Utils::DateTime& value) { SetOnDemandRotationStartDate(value); return *this;}

    /**
     * <p>Identifies the date and time that an in progress on-demand rotation was
     * initiated.</p> <p>The KMS API follows an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-eventual-consistency.html">eventual
     * consistency</a> model due to the distributed nature of the system. As a result,
     * there might be a slight delay between initiating on-demand key rotation and the
     * rotation's completion. Once the on-demand rotation is complete, use
     * <a>ListKeyRotations</a> to view the details of the on-demand rotation.</p>
     */
    inline GetKeyRotationStatusResult& WithOnDemandRotationStartDate(Aws::Utils::DateTime&& value) { SetOnDemandRotationStartDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKeyRotationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKeyRotationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKeyRotationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_keyRotationEnabled;

    Aws::String m_keyId;

    int m_rotationPeriodInDays;

    Aws::Utils::DateTime m_nextRotationDate;

    Aws::Utils::DateTime m_onDemandRotationStartDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
