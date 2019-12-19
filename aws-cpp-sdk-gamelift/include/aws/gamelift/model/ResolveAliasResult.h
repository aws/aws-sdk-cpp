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
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAliasOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ResolveAliasResult
  {
  public:
    ResolveAliasResult();
    ResolveAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResolveAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline ResolveAliasResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline ResolveAliasResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet identifier that the alias is pointing to.</p>
     */
    inline ResolveAliasResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline ResolveAliasResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline ResolveAliasResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * associated with the GameLift fleet resource that this alias points to. </p>
     */
    inline ResolveAliasResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}

  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
