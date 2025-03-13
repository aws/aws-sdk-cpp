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
    AWS_EC2_API ClientData() = default;
    AWS_EC2_API ClientData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A user-defined comment about the disk upload.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    ClientData& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the disk upload ends.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadEnd() const { return m_uploadEnd; }
    inline bool UploadEndHasBeenSet() const { return m_uploadEndHasBeenSet; }
    template<typename UploadEndT = Aws::Utils::DateTime>
    void SetUploadEnd(UploadEndT&& value) { m_uploadEndHasBeenSet = true; m_uploadEnd = std::forward<UploadEndT>(value); }
    template<typename UploadEndT = Aws::Utils::DateTime>
    ClientData& WithUploadEnd(UploadEndT&& value) { SetUploadEnd(std::forward<UploadEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the uploaded disk image, in GiB.</p>
     */
    inline double GetUploadSize() const { return m_uploadSize; }
    inline bool UploadSizeHasBeenSet() const { return m_uploadSizeHasBeenSet; }
    inline void SetUploadSize(double value) { m_uploadSizeHasBeenSet = true; m_uploadSize = value; }
    inline ClientData& WithUploadSize(double value) { SetUploadSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the disk upload starts.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadStart() const { return m_uploadStart; }
    inline bool UploadStartHasBeenSet() const { return m_uploadStartHasBeenSet; }
    template<typename UploadStartT = Aws::Utils::DateTime>
    void SetUploadStart(UploadStartT&& value) { m_uploadStartHasBeenSet = true; m_uploadStart = std::forward<UploadStartT>(value); }
    template<typename UploadStartT = Aws::Utils::DateTime>
    ClientData& WithUploadStart(UploadStartT&& value) { SetUploadStart(std::forward<UploadStartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_uploadEnd{};
    bool m_uploadEndHasBeenSet = false;

    double m_uploadSize{0.0};
    bool m_uploadSizeHasBeenSet = false;

    Aws::Utils::DateTime m_uploadStart{};
    bool m_uploadStartHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
