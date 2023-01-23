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
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupName = value; }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group. </p>
     */
    inline DescribeLabelGroupResult& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group. </p>
     */
    inline DescribeLabelGroupResult& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group. </p>
     */
    inline DescribeLabelGroupResult& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The ARN of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const{ return m_labelGroupArn; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(const Aws::String& value) { m_labelGroupArn = value; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(Aws::String&& value) { m_labelGroupArn = std::move(value); }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(const char* value) { m_labelGroupArn.assign(value); }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline DescribeLabelGroupResult& WithLabelGroupArn(const Aws::String& value) { SetLabelGroupArn(value); return *this;}

    /**
     * <p> The ARN of the label group. </p>
     */
    inline DescribeLabelGroupResult& WithLabelGroupArn(Aws::String&& value) { SetLabelGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the label group. </p>
     */
    inline DescribeLabelGroupResult& WithLabelGroupArn(const char* value) { SetLabelGroupArn(value); return *this;}


    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFaultCodes() const{ return m_faultCodes; }

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline void SetFaultCodes(const Aws::Vector<Aws::String>& value) { m_faultCodes = value; }

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline void SetFaultCodes(Aws::Vector<Aws::String>&& value) { m_faultCodes = std::move(value); }

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline DescribeLabelGroupResult& WithFaultCodes(const Aws::Vector<Aws::String>& value) { SetFaultCodes(value); return *this;}

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline DescribeLabelGroupResult& WithFaultCodes(Aws::Vector<Aws::String>&& value) { SetFaultCodes(std::move(value)); return *this;}

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline DescribeLabelGroupResult& AddFaultCodes(const Aws::String& value) { m_faultCodes.push_back(value); return *this; }

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline DescribeLabelGroupResult& AddFaultCodes(Aws::String&& value) { m_faultCodes.push_back(std::move(value)); return *this; }

    /**
     * <p> Codes indicating the type of anomaly associated with the labels in the
     * lagbel group. </p>
     */
    inline DescribeLabelGroupResult& AddFaultCodes(const char* value) { m_faultCodes.push_back(value); return *this; }


    /**
     * <p> The time at which the label group was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline DescribeLabelGroupResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> The time at which the label group was created. </p>
     */
    inline DescribeLabelGroupResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline DescribeLabelGroupResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> The time at which the label group was updated. </p>
     */
    inline DescribeLabelGroupResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_labelGroupName;

    Aws::String m_labelGroupArn;

    Aws::Vector<Aws::String> m_faultCodes;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
