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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the contents of an email message, represented as a raw MIME
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RawEmail">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API RawEmail
  {
  public:
    RawEmail();
    RawEmail(Aws::Utils::Json::JsonView jsonValue);
    RawEmail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline RawEmail& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline RawEmail& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
