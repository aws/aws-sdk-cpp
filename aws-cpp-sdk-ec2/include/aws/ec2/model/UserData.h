/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the user data for an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UserData">AWS API
   * Reference</a></p>
   */
  class UserData
  {
  public:
    AWS_EC2_API UserData();
    AWS_EC2_API UserData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API UserData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline UserData& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline UserData& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The user data. If you are using an Amazon Web Services SDK or command line
     * tool, Base64-encoding is performed for you, and you can load the text from a
     * file. Otherwise, you must provide Base64-encoded text.</p>
     */
    inline UserData& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
