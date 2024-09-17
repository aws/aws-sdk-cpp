/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
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
namespace CloudControlApi
{
namespace Model
{

  /**
   * <p>Represents information about a provisioned resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ResourceDescription">AWS
   * API Reference</a></p>
   */
  class ResourceDescription
  {
  public:
    AWS_CLOUDCONTROLAPI_API ResourceDescription();
    AWS_CLOUDCONTROLAPI_API ResourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API ResourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary identifier for the resource.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-identifier.html">Identifying
     * resources</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ResourceDescription& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ResourceDescription& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ResourceDescription& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the resource properties and their current values.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }
    inline ResourceDescription& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}
    inline ResourceDescription& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}
    inline ResourceDescription& WithProperties(const char* value) { SetProperties(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
