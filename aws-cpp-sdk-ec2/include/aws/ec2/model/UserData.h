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
  class AWS_EC2_API UserData
  {
  public:
    UserData();
    UserData(const Aws::Utils::Xml::XmlNode& xmlNode);
    UserData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline UserData& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline UserData& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The user data. If you are using an AWS SDK or command line tool,
     * Base64-encoding is performed for you, and you can load the text from a file.
     * Otherwise, you must provide Base64-encoded text.</p>
     */
    inline UserData& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
