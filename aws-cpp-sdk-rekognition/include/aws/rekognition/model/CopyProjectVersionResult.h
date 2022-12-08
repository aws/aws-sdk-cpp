/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class CopyProjectVersionResult
  {
  public:
    AWS_REKOGNITION_API CopyProjectVersionResult();
    AWS_REKOGNITION_API CopyProjectVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CopyProjectVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArn = value; }

    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArn = std::move(value); }

    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArn.assign(value); }

    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline CopyProjectVersionResult& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline CopyProjectVersionResult& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the copied model version in the destination project. </p>
     */
    inline CopyProjectVersionResult& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}

  private:

    Aws::String m_projectVersionArn;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
