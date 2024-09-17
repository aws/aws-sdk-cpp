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
    AWS_DIRECTORYSERVICE_API Computer();
    AWS_DIRECTORYSERVICE_API Computer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Computer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the computer.</p>
     */
    inline const Aws::String& GetComputerId() const{ return m_computerId; }
    inline bool ComputerIdHasBeenSet() const { return m_computerIdHasBeenSet; }
    inline void SetComputerId(const Aws::String& value) { m_computerIdHasBeenSet = true; m_computerId = value; }
    inline void SetComputerId(Aws::String&& value) { m_computerIdHasBeenSet = true; m_computerId = std::move(value); }
    inline void SetComputerId(const char* value) { m_computerIdHasBeenSet = true; m_computerId.assign(value); }
    inline Computer& WithComputerId(const Aws::String& value) { SetComputerId(value); return *this;}
    inline Computer& WithComputerId(Aws::String&& value) { SetComputerId(std::move(value)); return *this;}
    inline Computer& WithComputerId(const char* value) { SetComputerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computer name.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }
    inline Computer& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}
    inline Computer& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}
    inline Computer& WithComputerName(const char* value) { SetComputerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline const Aws::Vector<Attribute>& GetComputerAttributes() const{ return m_computerAttributes; }
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }
    inline void SetComputerAttributes(const Aws::Vector<Attribute>& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = value; }
    inline void SetComputerAttributes(Aws::Vector<Attribute>&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::move(value); }
    inline Computer& WithComputerAttributes(const Aws::Vector<Attribute>& value) { SetComputerAttributes(value); return *this;}
    inline Computer& WithComputerAttributes(Aws::Vector<Attribute>&& value) { SetComputerAttributes(std::move(value)); return *this;}
    inline Computer& AddComputerAttributes(const Attribute& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(value); return *this; }
    inline Computer& AddComputerAttributes(Attribute&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(std::move(value)); return *this; }
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
