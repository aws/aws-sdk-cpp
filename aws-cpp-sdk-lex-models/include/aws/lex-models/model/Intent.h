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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Identifies the specific version of an intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Intent">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API Intent
  {
  public:
    Intent();
    Intent(Aws::Utils::Json::JsonView jsonValue);
    Intent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline Intent& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline Intent& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline Intent& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The version of the intent.</p>
     */
    inline const Aws::String& GetIntentVersion() const{ return m_intentVersion; }

    /**
     * <p>The version of the intent.</p>
     */
    inline bool IntentVersionHasBeenSet() const { return m_intentVersionHasBeenSet; }

    /**
     * <p>The version of the intent.</p>
     */
    inline void SetIntentVersion(const Aws::String& value) { m_intentVersionHasBeenSet = true; m_intentVersion = value; }

    /**
     * <p>The version of the intent.</p>
     */
    inline void SetIntentVersion(Aws::String&& value) { m_intentVersionHasBeenSet = true; m_intentVersion = std::move(value); }

    /**
     * <p>The version of the intent.</p>
     */
    inline void SetIntentVersion(const char* value) { m_intentVersionHasBeenSet = true; m_intentVersion.assign(value); }

    /**
     * <p>The version of the intent.</p>
     */
    inline Intent& WithIntentVersion(const Aws::String& value) { SetIntentVersion(value); return *this;}

    /**
     * <p>The version of the intent.</p>
     */
    inline Intent& WithIntentVersion(Aws::String&& value) { SetIntentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the intent.</p>
     */
    inline Intent& WithIntentVersion(const char* value) { SetIntentVersion(value); return *this;}

  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet;

    Aws::String m_intentVersion;
    bool m_intentVersionHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
