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
  class AWS_DIRECTORYSERVICE_API Computer
  {
  public:
    Computer();
    Computer(Aws::Utils::Json::JsonView jsonValue);
    Computer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the computer.</p>
     */
    inline const Aws::String& GetComputerId() const{ return m_computerId; }

    /**
     * <p>The identifier of the computer.</p>
     */
    inline bool ComputerIdHasBeenSet() const { return m_computerIdHasBeenSet; }

    /**
     * <p>The identifier of the computer.</p>
     */
    inline void SetComputerId(const Aws::String& value) { m_computerIdHasBeenSet = true; m_computerId = value; }

    /**
     * <p>The identifier of the computer.</p>
     */
    inline void SetComputerId(Aws::String&& value) { m_computerIdHasBeenSet = true; m_computerId = std::move(value); }

    /**
     * <p>The identifier of the computer.</p>
     */
    inline void SetComputerId(const char* value) { m_computerIdHasBeenSet = true; m_computerId.assign(value); }

    /**
     * <p>The identifier of the computer.</p>
     */
    inline Computer& WithComputerId(const Aws::String& value) { SetComputerId(value); return *this;}

    /**
     * <p>The identifier of the computer.</p>
     */
    inline Computer& WithComputerId(Aws::String&& value) { SetComputerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the computer.</p>
     */
    inline Computer& WithComputerId(const char* value) { SetComputerId(value); return *this;}


    /**
     * <p>The computer name.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }

    /**
     * <p>The computer name.</p>
     */
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }

    /**
     * <p>The computer name.</p>
     */
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The computer name.</p>
     */
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }

    /**
     * <p>The computer name.</p>
     */
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }

    /**
     * <p>The computer name.</p>
     */
    inline Computer& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}

    /**
     * <p>The computer name.</p>
     */
    inline Computer& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}

    /**
     * <p>The computer name.</p>
     */
    inline Computer& WithComputerName(const char* value) { SetComputerName(value); return *this;}


    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline const Aws::Vector<Attribute>& GetComputerAttributes() const{ return m_computerAttributes; }

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline void SetComputerAttributes(const Aws::Vector<Attribute>& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = value; }

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline void SetComputerAttributes(Aws::Vector<Attribute>&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::move(value); }

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline Computer& WithComputerAttributes(const Aws::Vector<Attribute>& value) { SetComputerAttributes(value); return *this;}

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline Computer& WithComputerAttributes(Aws::Vector<Attribute>&& value) { SetComputerAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline Computer& AddComputerAttributes(const Attribute& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(value); return *this; }

    /**
     * <p>An array of <a>Attribute</a> objects containing the LDAP attributes that
     * belong to the computer account.</p>
     */
    inline Computer& AddComputerAttributes(Attribute&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_computerId;
    bool m_computerIdHasBeenSet;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet;

    Aws::Vector<Attribute> m_computerAttributes;
    bool m_computerAttributesHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
