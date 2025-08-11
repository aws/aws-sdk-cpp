/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>The DNS hostnames that Amazon EVS uses to install VMware vCenter Server, NSX,
   * SDDC Manager, and Cloud Builder. Each hostname must be unique, and resolve to a
   * domain name that you've registered in your DNS service of choice. Hostnames
   * cannot be changed.</p> <p>VMware VCF requires the deployment of two NSX Edge
   * nodes, and three NSX Manager virtual machines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/VcfHostnames">AWS
   * API Reference</a></p>
   */
  class VcfHostnames
  {
  public:
    AWS_EVS_API VcfHostnames() = default;
    AWS_EVS_API VcfHostnames(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API VcfHostnames& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VMware vCenter hostname.</p>
     */
    inline const Aws::String& GetVCenter() const { return m_vCenter; }
    inline bool VCenterHasBeenSet() const { return m_vCenterHasBeenSet; }
    template<typename VCenterT = Aws::String>
    void SetVCenter(VCenterT&& value) { m_vCenterHasBeenSet = true; m_vCenter = std::forward<VCenterT>(value); }
    template<typename VCenterT = Aws::String>
    VcfHostnames& WithVCenter(VCenterT&& value) { SetVCenter(std::forward<VCenterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VMware NSX hostname.</p>
     */
    inline const Aws::String& GetNsx() const { return m_nsx; }
    inline bool NsxHasBeenSet() const { return m_nsxHasBeenSet; }
    template<typename NsxT = Aws::String>
    void SetNsx(NsxT&& value) { m_nsxHasBeenSet = true; m_nsx = std::forward<NsxT>(value); }
    template<typename NsxT = Aws::String>
    VcfHostnames& WithNsx(NsxT&& value) { SetNsx(std::forward<NsxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for the first VMware NSX Manager virtual machine (VM).</p>
     */
    inline const Aws::String& GetNsxManager1() const { return m_nsxManager1; }
    inline bool NsxManager1HasBeenSet() const { return m_nsxManager1HasBeenSet; }
    template<typename NsxManager1T = Aws::String>
    void SetNsxManager1(NsxManager1T&& value) { m_nsxManager1HasBeenSet = true; m_nsxManager1 = std::forward<NsxManager1T>(value); }
    template<typename NsxManager1T = Aws::String>
    VcfHostnames& WithNsxManager1(NsxManager1T&& value) { SetNsxManager1(std::forward<NsxManager1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for the second VMware NSX Manager virtual machine (VM).</p>
     */
    inline const Aws::String& GetNsxManager2() const { return m_nsxManager2; }
    inline bool NsxManager2HasBeenSet() const { return m_nsxManager2HasBeenSet; }
    template<typename NsxManager2T = Aws::String>
    void SetNsxManager2(NsxManager2T&& value) { m_nsxManager2HasBeenSet = true; m_nsxManager2 = std::forward<NsxManager2T>(value); }
    template<typename NsxManager2T = Aws::String>
    VcfHostnames& WithNsxManager2(NsxManager2T&& value) { SetNsxManager2(std::forward<NsxManager2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for the third VMware NSX Manager virtual machine (VM).</p>
     */
    inline const Aws::String& GetNsxManager3() const { return m_nsxManager3; }
    inline bool NsxManager3HasBeenSet() const { return m_nsxManager3HasBeenSet; }
    template<typename NsxManager3T = Aws::String>
    void SetNsxManager3(NsxManager3T&& value) { m_nsxManager3HasBeenSet = true; m_nsxManager3 = std::forward<NsxManager3T>(value); }
    template<typename NsxManager3T = Aws::String>
    VcfHostnames& WithNsxManager3(NsxManager3T&& value) { SetNsxManager3(std::forward<NsxManager3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for the first NSX Edge node.</p>
     */
    inline const Aws::String& GetNsxEdge1() const { return m_nsxEdge1; }
    inline bool NsxEdge1HasBeenSet() const { return m_nsxEdge1HasBeenSet; }
    template<typename NsxEdge1T = Aws::String>
    void SetNsxEdge1(NsxEdge1T&& value) { m_nsxEdge1HasBeenSet = true; m_nsxEdge1 = std::forward<NsxEdge1T>(value); }
    template<typename NsxEdge1T = Aws::String>
    VcfHostnames& WithNsxEdge1(NsxEdge1T&& value) { SetNsxEdge1(std::forward<NsxEdge1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for the second NSX Edge node.</p>
     */
    inline const Aws::String& GetNsxEdge2() const { return m_nsxEdge2; }
    inline bool NsxEdge2HasBeenSet() const { return m_nsxEdge2HasBeenSet; }
    template<typename NsxEdge2T = Aws::String>
    void SetNsxEdge2(NsxEdge2T&& value) { m_nsxEdge2HasBeenSet = true; m_nsxEdge2 = std::forward<NsxEdge2T>(value); }
    template<typename NsxEdge2T = Aws::String>
    VcfHostnames& WithNsxEdge2(NsxEdge2T&& value) { SetNsxEdge2(std::forward<NsxEdge2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for SDDC Manager.</p>
     */
    inline const Aws::String& GetSddcManager() const { return m_sddcManager; }
    inline bool SddcManagerHasBeenSet() const { return m_sddcManagerHasBeenSet; }
    template<typename SddcManagerT = Aws::String>
    void SetSddcManager(SddcManagerT&& value) { m_sddcManagerHasBeenSet = true; m_sddcManager = std::forward<SddcManagerT>(value); }
    template<typename SddcManagerT = Aws::String>
    VcfHostnames& WithSddcManager(SddcManagerT&& value) { SetSddcManager(std::forward<SddcManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for VMware Cloud Builder.</p>
     */
    inline const Aws::String& GetCloudBuilder() const { return m_cloudBuilder; }
    inline bool CloudBuilderHasBeenSet() const { return m_cloudBuilderHasBeenSet; }
    template<typename CloudBuilderT = Aws::String>
    void SetCloudBuilder(CloudBuilderT&& value) { m_cloudBuilderHasBeenSet = true; m_cloudBuilder = std::forward<CloudBuilderT>(value); }
    template<typename CloudBuilderT = Aws::String>
    VcfHostnames& WithCloudBuilder(CloudBuilderT&& value) { SetCloudBuilder(std::forward<CloudBuilderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vCenter;
    bool m_vCenterHasBeenSet = false;

    Aws::String m_nsx;
    bool m_nsxHasBeenSet = false;

    Aws::String m_nsxManager1;
    bool m_nsxManager1HasBeenSet = false;

    Aws::String m_nsxManager2;
    bool m_nsxManager2HasBeenSet = false;

    Aws::String m_nsxManager3;
    bool m_nsxManager3HasBeenSet = false;

    Aws::String m_nsxEdge1;
    bool m_nsxEdge1HasBeenSet = false;

    Aws::String m_nsxEdge2;
    bool m_nsxEdge2HasBeenSet = false;

    Aws::String m_sddcManager;
    bool m_sddcManagerHasBeenSet = false;

    Aws::String m_cloudBuilder;
    bool m_cloudBuilderHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
