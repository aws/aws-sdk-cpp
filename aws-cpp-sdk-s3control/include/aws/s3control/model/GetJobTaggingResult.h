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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API GetJobTaggingResult
  {
  public:
    GetJobTaggingResult();
    GetJobTaggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetJobTaggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline void SetTags(const Aws::Vector<S3Tag>& value) { m_tags = value; }

    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline void SetTags(Aws::Vector<S3Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline GetJobTaggingResult& WithTags(const Aws::Vector<S3Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline GetJobTaggingResult& WithTags(Aws::Vector<S3Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline GetJobTaggingResult& AddTags(const S3Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The set of tags associated with the job.</p>
     */
    inline GetJobTaggingResult& AddTags(S3Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<S3Tag> m_tags;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
