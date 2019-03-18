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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/Communication.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The five most recent communications associated with the case.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RecentCaseCommunications">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API RecentCaseCommunications
  {
  public:
    RecentCaseCommunications();
    RecentCaseCommunications(Aws::Utils::Json::JsonView jsonValue);
    RecentCaseCommunications& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline const Aws::Vector<Communication>& GetCommunications() const{ return m_communications; }

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline bool CommunicationsHasBeenSet() const { return m_communicationsHasBeenSet; }

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline void SetCommunications(const Aws::Vector<Communication>& value) { m_communicationsHasBeenSet = true; m_communications = value; }

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline void SetCommunications(Aws::Vector<Communication>&& value) { m_communicationsHasBeenSet = true; m_communications = std::move(value); }

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline RecentCaseCommunications& WithCommunications(const Aws::Vector<Communication>& value) { SetCommunications(value); return *this;}

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline RecentCaseCommunications& WithCommunications(Aws::Vector<Communication>&& value) { SetCommunications(std::move(value)); return *this;}

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline RecentCaseCommunications& AddCommunications(const Communication& value) { m_communicationsHasBeenSet = true; m_communications.push_back(value); return *this; }

    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline RecentCaseCommunications& AddCommunications(Communication&& value) { m_communicationsHasBeenSet = true; m_communications.push_back(std::move(value)); return *this; }


    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline RecentCaseCommunications& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline RecentCaseCommunications& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline RecentCaseCommunications& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Communication> m_communications;
    bool m_communicationsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
