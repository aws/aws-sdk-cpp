/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class GetIdNamespaceRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API GetIdNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdNamespace"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceName() const { return m_idNamespaceName; }
    inline bool IdNamespaceNameHasBeenSet() const { return m_idNamespaceNameHasBeenSet; }
    template<typename IdNamespaceNameT = Aws::String>
    void SetIdNamespaceName(IdNamespaceNameT&& value) { m_idNamespaceNameHasBeenSet = true; m_idNamespaceName = std::forward<IdNamespaceNameT>(value); }
    template<typename IdNamespaceNameT = Aws::String>
    GetIdNamespaceRequest& WithIdNamespaceName(IdNamespaceNameT&& value) { SetIdNamespaceName(std::forward<IdNamespaceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idNamespaceName;
    bool m_idNamespaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
