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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the client-specific data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientData">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API ClientData
  {
  public:
    ClientData();
    ClientData(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline ClientData& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline ClientData& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline ClientData& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The time that the disk upload ends.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadEnd() const{ return m_uploadEnd; }

    /**
     * <p>The time that the disk upload ends.</p>
     */
    inline void SetUploadEnd(const Aws::Utils::DateTime& value) { m_uploadEndHasBeenSet = true; m_uploadEnd = value; }

    /**
     * <p>The time that the disk upload ends.</p>
     */
    inline void SetUploadEnd(Aws::Utils::DateTime&& value) { m_uploadEndHasBeenSet = true; m_uploadEnd = std::move(value); }

    /**
     * <p>The time that the disk upload ends.</p>
     */
    inline ClientData& WithUploadEnd(const Aws::Utils::DateTime& value) { SetUploadEnd(value); return *this;}

    /**
     * <p>The time that the disk upload ends.</p>
     */
    inline ClientData& WithUploadEnd(Aws::Utils::DateTime&& value) { SetUploadEnd(std::move(value)); return *this;}


    /**
     * <p>The size of the uploaded disk image, in GiB.</p>
     */
    inline double GetUploadSize() const{ return m_uploadSize; }

    /**
     * <p>The size of the uploaded disk image, in GiB.</p>
     */
    inline void SetUploadSize(double value) { m_uploadSizeHasBeenSet = true; m_uploadSize = value; }

    /**
     * <p>The size of the uploaded disk image, in GiB.</p>
     */
    inline ClientData& WithUploadSize(double value) { SetUploadSize(value); return *this;}


    /**
     * <p>The time that the disk upload starts.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadStart() const{ return m_uploadStart; }

    /**
     * <p>The time that the disk upload starts.</p>
     */
    inline void SetUploadStart(const Aws::Utils::DateTime& value) { m_uploadStartHasBeenSet = true; m_uploadStart = value; }

    /**
     * <p>The time that the disk upload starts.</p>
     */
    inline void SetUploadStart(Aws::Utils::DateTime&& value) { m_uploadStartHasBeenSet = true; m_uploadStart = std::move(value); }

    /**
     * <p>The time that the disk upload starts.</p>
     */
    inline ClientData& WithUploadStart(const Aws::Utils::DateTime& value) { SetUploadStart(value); return *this;}

    /**
     * <p>The time that the disk upload starts.</p>
     */
    inline ClientData& WithUploadStart(Aws::Utils::DateTime&& value) { SetUploadStart(std::move(value)); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    Aws::Utils::DateTime m_uploadEnd;
    bool m_uploadEndHasBeenSet;

    double m_uploadSize;
    bool m_uploadSizeHasBeenSet;

    Aws::Utils::DateTime m_uploadStart;
    bool m_uploadStartHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
