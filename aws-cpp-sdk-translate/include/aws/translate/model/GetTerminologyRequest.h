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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/TerminologyDataFormat.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class AWS_TRANSLATE_API GetTerminologyRequest : public TranslateRequest
  {
  public:
    GetTerminologyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTerminology"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data format of the custom terminology being retrieved, either CSV or
     * TMX.</p>
     */
    inline const TerminologyDataFormat& GetTerminologyDataFormat() const{ return m_terminologyDataFormat; }

    /**
     * <p>The data format of the custom terminology being retrieved, either CSV or
     * TMX.</p>
     */
    inline bool TerminologyDataFormatHasBeenSet() const { return m_terminologyDataFormatHasBeenSet; }

    /**
     * <p>The data format of the custom terminology being retrieved, either CSV or
     * TMX.</p>
     */
    inline void SetTerminologyDataFormat(const TerminologyDataFormat& value) { m_terminologyDataFormatHasBeenSet = true; m_terminologyDataFormat = value; }

    /**
     * <p>The data format of the custom terminology being retrieved, either CSV or
     * TMX.</p>
     */
    inline void SetTerminologyDataFormat(TerminologyDataFormat&& value) { m_terminologyDataFormatHasBeenSet = true; m_terminologyDataFormat = std::move(value); }

    /**
     * <p>The data format of the custom terminology being retrieved, either CSV or
     * TMX.</p>
     */
    inline GetTerminologyRequest& WithTerminologyDataFormat(const TerminologyDataFormat& value) { SetTerminologyDataFormat(value); return *this;}

    /**
     * <p>The data format of the custom terminology being retrieved, either CSV or
     * TMX.</p>
     */
    inline GetTerminologyRequest& WithTerminologyDataFormat(TerminologyDataFormat&& value) { SetTerminologyDataFormat(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    TerminologyDataFormat m_terminologyDataFormat;
    bool m_terminologyDataFormatHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
