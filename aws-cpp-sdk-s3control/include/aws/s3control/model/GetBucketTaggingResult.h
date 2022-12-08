/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetBucketTaggingResult
  {
  public:
    AWS_S3CONTROL_API GetBucketTaggingResult();
    AWS_S3CONTROL_API GetBucketTaggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetBucketTaggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTagSet() const{ return m_tagSet; }

    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline void SetTagSet(const Aws::Vector<S3Tag>& value) { m_tagSet = value; }

    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline void SetTagSet(Aws::Vector<S3Tag>&& value) { m_tagSet = std::move(value); }

    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline GetBucketTaggingResult& WithTagSet(const Aws::Vector<S3Tag>& value) { SetTagSet(value); return *this;}

    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline GetBucketTaggingResult& WithTagSet(Aws::Vector<S3Tag>&& value) { SetTagSet(std::move(value)); return *this;}

    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline GetBucketTaggingResult& AddTagSet(const S3Tag& value) { m_tagSet.push_back(value); return *this; }

    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline GetBucketTaggingResult& AddTagSet(S3Tag&& value) { m_tagSet.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<S3Tag> m_tagSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
