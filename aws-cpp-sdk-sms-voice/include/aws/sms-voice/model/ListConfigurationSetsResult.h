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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoice
{
namespace Model
{
  /**
   * An object that contains information about the configuration sets for your
   * account in the current region.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/ListConfigurationSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API ListConfigurationSetsResult
  {
  public:
    ListConfigurationSetsResult();
    ListConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationSets() const{ return m_configurationSets; }

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline void SetConfigurationSets(const Aws::Vector<Aws::String>& value) { m_configurationSets = value; }

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline void SetConfigurationSets(Aws::Vector<Aws::String>&& value) { m_configurationSets = std::move(value); }

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline ListConfigurationSetsResult& WithConfigurationSets(const Aws::Vector<Aws::String>& value) { SetConfigurationSets(value); return *this;}

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline ListConfigurationSetsResult& WithConfigurationSets(Aws::Vector<Aws::String>&& value) { SetConfigurationSets(std::move(value)); return *this;}

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(const Aws::String& value) { m_configurationSets.push_back(value); return *this; }

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(Aws::String&& value) { m_configurationSets.push_back(std::move(value)); return *this; }

    /**
     * An object that contains a list of configuration sets for your account in the
     * current region.
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(const char* value) { m_configurationSets.push_back(value); return *this; }


    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline ListConfigurationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline ListConfigurationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token returned from a previous call to ListConfigurationSets to indicate the
     * position in the list of configuration sets.
     */
    inline ListConfigurationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_configurationSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
