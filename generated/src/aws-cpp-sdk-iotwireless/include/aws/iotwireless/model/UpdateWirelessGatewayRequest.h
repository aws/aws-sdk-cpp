/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateWirelessGatewayRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateWirelessGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWirelessGateway"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateWirelessGatewayRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name of the resource.</p>  <p>The following special characters
     * aren't accepted: <code>&lt;&gt;^#~$</code> </p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateWirelessGatewayRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWirelessGatewayRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetJoinEuiFilters() const { return m_joinEuiFilters; }
    inline bool JoinEuiFiltersHasBeenSet() const { return m_joinEuiFiltersHasBeenSet; }
    template<typename JoinEuiFiltersT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetJoinEuiFilters(JoinEuiFiltersT&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters = std::forward<JoinEuiFiltersT>(value); }
    template<typename JoinEuiFiltersT = Aws::Vector<Aws::Vector<Aws::String>>>
    UpdateWirelessGatewayRequest& WithJoinEuiFilters(JoinEuiFiltersT&& value) { SetJoinEuiFilters(std::forward<JoinEuiFiltersT>(value)); return *this;}
    template<typename JoinEuiFiltersT = Aws::Vector<Aws::String>>
    UpdateWirelessGatewayRequest& AddJoinEuiFilters(JoinEuiFiltersT&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters.emplace_back(std::forward<JoinEuiFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetNetIdFilters() const { return m_netIdFilters; }
    inline bool NetIdFiltersHasBeenSet() const { return m_netIdFiltersHasBeenSet; }
    template<typename NetIdFiltersT = Aws::Vector<Aws::String>>
    void SetNetIdFilters(NetIdFiltersT&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters = std::forward<NetIdFiltersT>(value); }
    template<typename NetIdFiltersT = Aws::Vector<Aws::String>>
    UpdateWirelessGatewayRequest& WithNetIdFilters(NetIdFiltersT&& value) { SetNetIdFilters(std::forward<NetIdFiltersT>(value)); return *this;}
    template<typename NetIdFiltersT = Aws::String>
    UpdateWirelessGatewayRequest& AddNetIdFilters(NetIdFiltersT&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.emplace_back(std::forward<NetIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MaxEIRP value.</p>
     */
    inline double GetMaxEirp() const { return m_maxEirp; }
    inline bool MaxEirpHasBeenSet() const { return m_maxEirpHasBeenSet; }
    inline void SetMaxEirp(double value) { m_maxEirpHasBeenSet = true; m_maxEirp = value; }
    inline UpdateWirelessGatewayRequest& WithMaxEirp(double value) { SetMaxEirp(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_joinEuiFilters;
    bool m_joinEuiFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_netIdFilters;
    bool m_netIdFiltersHasBeenSet = false;

    double m_maxEirp{0.0};
    bool m_maxEirpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
