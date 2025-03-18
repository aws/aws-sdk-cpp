/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/Attribute.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about a computer account in a directory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Computer">AWS API
   * Reference</a></p>
   */
  class Computer
  {
  public:
    AWS_DIRECTORYSERVICE_API Computer() = default;
    AWS_DIRECTORYSERVICE_API Computer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Computer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the computer.</p>
     */
    inline const Aws::String& GetComputerId() const { return m_computerId; }
    inline bool ComputerIdHasBeenSet() const { return m_computerIdHasBeenSet; }
    template<typename ComputerIdT = Aws::String>
    void SetComputerId(ComputerIdT&& value) { m_computerIdHasBeenSet = true; m_computerId = std::forward<ComputerIdT>(value); }
    template<typename ComputerIdT = Aws::String>
    Computer& WithComputerId(ComputerIdT&& value) { SetComputerId(std::forward<ComputerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computer name.</p>
     */
    inline const Aws::String& GetComputerName() const { return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    template<typename ComputerNameT = Aws::String>
    void SetComputerName(ComputerNameT&& value) { m_computerNameHasBeenSet = true; m_computerName = std::forward<ComputerNameT>(value); }
    template<typename ComputerNameT = Aws::String>
    Computer& WithComputerName(ComputerNameT&& value) { SetComputerName(std::forward<ComputerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline const Aws::Vector<Attribute>& GetComputerAttributes() const { return m_computerAttributes; }
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }
    template<typename ComputerAttributesT = Aws::Vector<Attribute>>
    void SetComputerAttributes(ComputerAttributesT&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::forward<ComputerAttributesT>(value); }
    template<typename ComputerAttributesT = Aws::Vector<Attribute>>
    Computer& WithComputerAttributes(ComputerAttributesT&& value) { SetComputerAttributes(std::forward<ComputerAttributesT>(value)); return *this;}
    template<typename ComputerAttributesT = Attribute>
    Computer& AddComputerAttributes(ComputerAttributesT&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.emplace_back(std::forward<ComputerAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_computerId;
    bool m_computerIdHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::Vector<Attribute> m_computerAttributes;
    bool m_computerAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
