/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ClientData
  {
  public:
    AWS_EC2_API ClientData();
    AWS_EC2_API ClientData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

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
    inline bool UploadEndHasBeenSet() const { return m_uploadEndHasBeenSet; }

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
    inline bool UploadSizeHasBeenSet() const { return m_uploadSizeHasBeenSet; }

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
    inline bool UploadStartHasBeenSet() const { return m_uploadStartHasBeenSet; }

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
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_uploadEnd;
    bool m_uploadEndHasBeenSet = false;

    double m_uploadSize;
    bool m_uploadSizeHasBeenSet = false;

    Aws::Utils::DateTime m_uploadStart;
    bool m_uploadStartHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
