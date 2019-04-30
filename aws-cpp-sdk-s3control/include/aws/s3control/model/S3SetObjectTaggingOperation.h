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
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a Set Object Tagging operation.
   * Amazon S3 batch operations passes each value through to the underlying PUT
   * Object tagging API. For more information about the parameters for this
   * operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPUTtagging.html">PUT
   * Object tagging</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectTaggingOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3SetObjectTaggingOperation
  {
  public:
    S3SetObjectTaggingOperation();
    S3SetObjectTaggingOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3SetObjectTaggingOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const Aws::Vector<S3Tag>& GetTagSet() const{ return m_tagSet; }

    /**
     * <p/>
     */
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTagSet(const Aws::Vector<S3Tag>& value) { m_tagSetHasBeenSet = true; m_tagSet = value; }

    /**
     * <p/>
     */
    inline void SetTagSet(Aws::Vector<S3Tag>&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::move(value); }

    /**
     * <p/>
     */
    inline S3SetObjectTaggingOperation& WithTagSet(const Aws::Vector<S3Tag>& value) { SetTagSet(value); return *this;}

    /**
     * <p/>
     */
    inline S3SetObjectTaggingOperation& WithTagSet(Aws::Vector<S3Tag>&& value) { SetTagSet(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3SetObjectTaggingOperation& AddTagSet(const S3Tag& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline S3SetObjectTaggingOperation& AddTagSet(S3Tag&& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<S3Tag> m_tagSet;
    bool m_tagSetHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
