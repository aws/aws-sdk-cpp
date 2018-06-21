/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie/model/FailedS3Resource.h>
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
namespace Macie
{
namespace Model
{
  class AWS_MACIE_API AssociateS3ResourcesResult
  {
  public:
    AssociateS3ResourcesResult();
    AssociateS3ResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateS3ResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline const Aws::Vector<FailedS3Resource>& GetFailedS3Resources() const{ return m_failedS3Resources; }

    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline void SetFailedS3Resources(const Aws::Vector<FailedS3Resource>& value) { m_failedS3Resources = value; }

    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline void SetFailedS3Resources(Aws::Vector<FailedS3Resource>&& value) { m_failedS3Resources = std::move(value); }

    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline AssociateS3ResourcesResult& WithFailedS3Resources(const Aws::Vector<FailedS3Resource>& value) { SetFailedS3Resources(value); return *this;}

    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline AssociateS3ResourcesResult& WithFailedS3Resources(Aws::Vector<FailedS3Resource>&& value) { SetFailedS3Resources(std::move(value)); return *this;}

    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline AssociateS3ResourcesResult& AddFailedS3Resources(const FailedS3Resource& value) { m_failedS3Resources.push_back(value); return *this; }

    /**
     * <p>S3 resources that couldn't be associated with Amazon Macie. An error code and
     * an error message are provided for each failed item. </p>
     */
    inline AssociateS3ResourcesResult& AddFailedS3Resources(FailedS3Resource&& value) { m_failedS3Resources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedS3Resource> m_failedS3Resources;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
