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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The default conference provider that is used if no other scheduled meetings
   * are detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ConferencePreference">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API ConferencePreference
  {
  public:
    ConferencePreference();
    ConferencePreference(Aws::Utils::Json::JsonView jsonValue);
    ConferencePreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline const Aws::String& GetDefaultConferenceProviderArn() const{ return m_defaultConferenceProviderArn; }

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline bool DefaultConferenceProviderArnHasBeenSet() const { return m_defaultConferenceProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline void SetDefaultConferenceProviderArn(const Aws::String& value) { m_defaultConferenceProviderArnHasBeenSet = true; m_defaultConferenceProviderArn = value; }

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline void SetDefaultConferenceProviderArn(Aws::String&& value) { m_defaultConferenceProviderArnHasBeenSet = true; m_defaultConferenceProviderArn = std::move(value); }

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline void SetDefaultConferenceProviderArn(const char* value) { m_defaultConferenceProviderArnHasBeenSet = true; m_defaultConferenceProviderArn.assign(value); }

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline ConferencePreference& WithDefaultConferenceProviderArn(const Aws::String& value) { SetDefaultConferenceProviderArn(value); return *this;}

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline ConferencePreference& WithDefaultConferenceProviderArn(Aws::String&& value) { SetDefaultConferenceProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the default conference provider.</p>
     */
    inline ConferencePreference& WithDefaultConferenceProviderArn(const char* value) { SetDefaultConferenceProviderArn(value); return *this;}

  private:

    Aws::String m_defaultConferenceProviderArn;
    bool m_defaultConferenceProviderArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
