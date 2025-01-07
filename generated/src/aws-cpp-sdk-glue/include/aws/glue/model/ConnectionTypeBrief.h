/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Capabilities.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Brief information about a supported connection type returned by the
   * <code>ListConnectionTypes</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionTypeBrief">AWS
   * API Reference</a></p>
   */
  class ConnectionTypeBrief
  {
  public:
    AWS_GLUE_API ConnectionTypeBrief();
    AWS_GLUE_API ConnectionTypeBrief(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionTypeBrief& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection type.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline ConnectionTypeBrief& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline ConnectionTypeBrief& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connection type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConnectionTypeBrief& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConnectionTypeBrief& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConnectionTypeBrief& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication types, data interface types (compute
     * environments), and data operations of the connector.</p>
     */
    inline const Capabilities& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Capabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Capabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline ConnectionTypeBrief& WithCapabilities(const Capabilities& value) { SetCapabilities(value); return *this;}
    inline ConnectionTypeBrief& WithCapabilities(Capabilities&& value) { SetCapabilities(std::move(value)); return *this;}
    ///@}
  private:

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Capabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
