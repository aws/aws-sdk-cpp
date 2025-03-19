/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
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
namespace DirectoryServiceData
{
namespace Model
{

  /**
   * <p> The data type for an attribute. Each attribute value is described as a
   * name-value pair. The name is the AD schema name, and the value is the data
   * itself. For a list of supported attributes, see <a
   * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data_attributes.html">Directory
   * Service Data Attributes</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AttributeValue
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API AttributeValue() = default;
    AWS_DIRECTORYSERVICEDATA_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates that the attribute type value is a boolean. For example: </p> <p>
     * <code>"BOOL": true</code> </p>
     */
    inline bool GetBOOL() const { return m_bOOL; }
    inline bool BOOLHasBeenSet() const { return m_bOOLHasBeenSet; }
    inline void SetBOOL(bool value) { m_bOOLHasBeenSet = true; m_bOOL = value; }
    inline AttributeValue& WithBOOL(bool value) { SetBOOL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates that the attribute type value is a number. For example: </p> <p>
     * <code>"N": "16"</code> </p>
     */
    inline long long GetN() const { return m_n; }
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }
    inline void SetN(long long value) { m_nHasBeenSet = true; m_n = value; }
    inline AttributeValue& WithN(long long value) { SetN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates that the attribute type value is a string. For example: </p> <p>
     * <code>"S": "S Group"</code> </p>
     */
    inline const Aws::String& GetS() const { return m_s; }
    inline bool SHasBeenSet() const { return m_sHasBeenSet; }
    template<typename ST = Aws::String>
    void SetS(ST&& value) { m_sHasBeenSet = true; m_s = std::forward<ST>(value); }
    template<typename ST = Aws::String>
    AttributeValue& WithS(ST&& value) { SetS(std::forward<ST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates that the attribute type value is a string set. For example: </p>
     * <p> <code>"SS":
     * ["sample_service_class/host.sample.com:1234/sample_service_name_1",
     * "sample_service_class/host.sample.com:1234/sample_service_name_2"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSS() const { return m_sS; }
    inline bool SSHasBeenSet() const { return m_sSHasBeenSet; }
    template<typename SST = Aws::Vector<Aws::String>>
    void SetSS(SST&& value) { m_sSHasBeenSet = true; m_sS = std::forward<SST>(value); }
    template<typename SST = Aws::Vector<Aws::String>>
    AttributeValue& WithSS(SST&& value) { SetSS(std::forward<SST>(value)); return *this;}
    template<typename SST = Aws::String>
    AttributeValue& AddSS(SST&& value) { m_sSHasBeenSet = true; m_sS.emplace_back(std::forward<SST>(value)); return *this; }
    ///@}
  private:

    bool m_bOOL{false};
    bool m_bOOLHasBeenSet = false;

    long long m_n{0};
    bool m_nHasBeenSet = false;

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    Aws::Vector<Aws::String> m_sS;
    bool m_sSHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
