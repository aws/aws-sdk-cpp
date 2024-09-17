/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The configuration of an event that the application publishes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/Publication">AWS
   * API Reference</a></p>
   */
  class Publication
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API Publication();
    AWS_APPINTEGRATIONSSERVICE_API Publication(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Publication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the publication.</p>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }
    inline Publication& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}
    inline Publication& WithEvent(Aws::String&& value) { SetEvent(std::move(value)); return *this;}
    inline Publication& WithEvent(const char* value) { SetEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON schema of the publication event.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline Publication& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline Publication& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline Publication& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the publication.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Publication& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Publication& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Publication& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
