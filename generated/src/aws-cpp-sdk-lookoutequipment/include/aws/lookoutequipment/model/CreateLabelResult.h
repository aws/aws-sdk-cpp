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
  class CreateLabelResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateLabelResult();
    AWS_LOOKOUTEQUIPMENT_API CreateLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline const Aws::String& GetLabelId() const{ return m_labelId; }

    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline void SetLabelId(const Aws::String& value) { m_labelId = value; }

    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline void SetLabelId(Aws::String&& value) { m_labelId = std::move(value); }

    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline void SetLabelId(const char* value) { m_labelId.assign(value); }

    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline CreateLabelResult& WithLabelId(const Aws::String& value) { SetLabelId(value); return *this;}

    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline CreateLabelResult& WithLabelId(Aws::String&& value) { SetLabelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline CreateLabelResult& WithLabelId(const char* value) { SetLabelId(value); return *this;}

  private:

    Aws::String m_labelId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
