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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the message content for a custom channel message that's sent to
   * participants in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyCustomMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API JourneyCustomMessage
  {
  public:
    JourneyCustomMessage();
    JourneyCustomMessage(Aws::Utils::Json::JsonView jsonValue);
    JourneyCustomMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline JourneyCustomMessage& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline JourneyCustomMessage& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The message content that's passed to an AWS Lambda function or to a web
     * hook.</p>
     */
    inline JourneyCustomMessage& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
