/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Core.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class CreateCoreDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateCoreDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCoreDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    CreateCoreDefinitionVersionRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the core definition.
     */
    inline const Aws::String& GetCoreDefinitionId() const { return m_coreDefinitionId; }
    inline bool CoreDefinitionIdHasBeenSet() const { return m_coreDefinitionIdHasBeenSet; }
    template<typename CoreDefinitionIdT = Aws::String>
    void SetCoreDefinitionId(CoreDefinitionIdT&& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = std::forward<CoreDefinitionIdT>(value); }
    template<typename CoreDefinitionIdT = Aws::String>
    CreateCoreDefinitionVersionRequest& WithCoreDefinitionId(CoreDefinitionIdT&& value) { SetCoreDefinitionId(std::forward<CoreDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of cores in the core definition version.
     */
    inline const Aws::Vector<Core>& GetCores() const { return m_cores; }
    inline bool CoresHasBeenSet() const { return m_coresHasBeenSet; }
    template<typename CoresT = Aws::Vector<Core>>
    void SetCores(CoresT&& value) { m_coresHasBeenSet = true; m_cores = std::forward<CoresT>(value); }
    template<typename CoresT = Aws::Vector<Core>>
    CreateCoreDefinitionVersionRequest& WithCores(CoresT&& value) { SetCores(std::forward<CoresT>(value)); return *this;}
    template<typename CoresT = Core>
    CreateCoreDefinitionVersionRequest& AddCores(CoresT&& value) { m_coresHasBeenSet = true; m_cores.emplace_back(std::forward<CoresT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet = false;

    Aws::Vector<Core> m_cores;
    bool m_coresHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
