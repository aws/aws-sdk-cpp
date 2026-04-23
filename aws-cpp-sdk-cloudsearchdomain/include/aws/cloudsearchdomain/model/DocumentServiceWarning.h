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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>A warning returned by the document service when an issue is discovered while
   * processing an upload request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/DocumentServiceWarning">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API DocumentServiceWarning
  {
  public:
    DocumentServiceWarning();
    DocumentServiceWarning(Aws::Utils::Json::JsonView jsonValue);
    DocumentServiceWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline DocumentServiceWarning& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline DocumentServiceWarning& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The description for a warning returned by the document service.</p>
     */
    inline DocumentServiceWarning& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
