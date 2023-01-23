/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateLabelGroupResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateLabelGroupResult();
    AWS_LOOKOUTEQUIPMENT_API CreateLabelGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateLabelGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupName = value; }

    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline CreateLabelGroupResult& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline CreateLabelGroupResult& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group that you have created. Data in this field will
     * be retained for service usage. Follow best practices for the security of your
     * data. </p>
     */
    inline CreateLabelGroupResult& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const{ return m_labelGroupArn; }

    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline void SetLabelGroupArn(const Aws::String& value) { m_labelGroupArn = value; }

    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline void SetLabelGroupArn(Aws::String&& value) { m_labelGroupArn = std::move(value); }

    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline void SetLabelGroupArn(const char* value) { m_labelGroupArn.assign(value); }

    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline CreateLabelGroupResult& WithLabelGroupArn(const Aws::String& value) { SetLabelGroupArn(value); return *this;}

    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline CreateLabelGroupResult& WithLabelGroupArn(Aws::String&& value) { SetLabelGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the label group that you have created. </p>
     */
    inline CreateLabelGroupResult& WithLabelGroupArn(const char* value) { SetLabelGroupArn(value); return *this;}

  private:

    Aws::String m_labelGroupName;

    Aws::String m_labelGroupArn;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
