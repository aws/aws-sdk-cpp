/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>The violation details for a web ACL that's associated with at least one
   * resource that's out of scope of the Firewall Manager policy. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/WebACLHasOutOfScopeResourcesViolation">AWS
   * API Reference</a></p>
   */
  class WebACLHasOutOfScopeResourcesViolation
  {
  public:
    AWS_FMS_API WebACLHasOutOfScopeResourcesViolation();
    AWS_FMS_API WebACLHasOutOfScopeResourcesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API WebACLHasOutOfScopeResourcesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL. </p>
     */
    inline const Aws::String& GetWebACLArn() const{ return m_webACLArn; }
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
    inline void SetWebACLArn(const Aws::String& value) { m_webACLArnHasBeenSet = true; m_webACLArn = value; }
    inline void SetWebACLArn(Aws::String&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::move(value); }
    inline void SetWebACLArn(const char* value) { m_webACLArnHasBeenSet = true; m_webACLArn.assign(value); }
    inline WebACLHasOutOfScopeResourcesViolation& WithWebACLArn(const Aws::String& value) { SetWebACLArn(value); return *this;}
    inline WebACLHasOutOfScopeResourcesViolation& WithWebACLArn(Aws::String&& value) { SetWebACLArn(std::move(value)); return *this;}
    inline WebACLHasOutOfScopeResourcesViolation& WithWebACLArn(const char* value) { SetWebACLArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Name (ARN) for the resources that are out of
     * scope of the policy and are associated with the web ACL. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOutOfScopeResourceList() const{ return m_outOfScopeResourceList; }
    inline bool OutOfScopeResourceListHasBeenSet() const { return m_outOfScopeResourceListHasBeenSet; }
    inline void SetOutOfScopeResourceList(const Aws::Vector<Aws::String>& value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList = value; }
    inline void SetOutOfScopeResourceList(Aws::Vector<Aws::String>&& value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList = std::move(value); }
    inline WebACLHasOutOfScopeResourcesViolation& WithOutOfScopeResourceList(const Aws::Vector<Aws::String>& value) { SetOutOfScopeResourceList(value); return *this;}
    inline WebACLHasOutOfScopeResourcesViolation& WithOutOfScopeResourceList(Aws::Vector<Aws::String>&& value) { SetOutOfScopeResourceList(std::move(value)); return *this;}
    inline WebACLHasOutOfScopeResourcesViolation& AddOutOfScopeResourceList(const Aws::String& value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList.push_back(value); return *this; }
    inline WebACLHasOutOfScopeResourcesViolation& AddOutOfScopeResourceList(Aws::String&& value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList.push_back(std::move(value)); return *this; }
    inline WebACLHasOutOfScopeResourcesViolation& AddOutOfScopeResourceList(const char* value) { m_outOfScopeResourceListHasBeenSet = true; m_outOfScopeResourceList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_outOfScopeResourceList;
    bool m_outOfScopeResourceListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
