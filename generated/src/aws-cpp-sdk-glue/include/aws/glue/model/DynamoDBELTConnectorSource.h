/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DDBELTConnectionOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GlueSchema.h>
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
   * <p>Specifies a DynamoDB ELT connector source for extracting data from DynamoDB
   * tables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DynamoDBELTConnectorSource">AWS
   * API Reference</a></p>
   */
  class DynamoDBELTConnectorSource
  {
  public:
    AWS_GLUE_API DynamoDBELTConnectorSource() = default;
    AWS_GLUE_API DynamoDBELTConnectorSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DynamoDBELTConnectorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DynamoDB ELT connector source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DynamoDBELTConnectorSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection options for the DynamoDB ELT connector source.</p>
     */
    inline const DDBELTConnectionOptions& GetConnectionOptions() const { return m_connectionOptions; }
    inline bool ConnectionOptionsHasBeenSet() const { return m_connectionOptionsHasBeenSet; }
    template<typename ConnectionOptionsT = DDBELTConnectionOptions>
    void SetConnectionOptions(ConnectionOptionsT&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = std::forward<ConnectionOptionsT>(value); }
    template<typename ConnectionOptionsT = DDBELTConnectionOptions>
    DynamoDBELTConnectorSource& WithConnectionOptions(ConnectionOptionsT&& value) { SetConnectionOptions(std::forward<ConnectionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the DynamoDB ELT connector source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    DynamoDBELTConnectorSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    DynamoDBELTConnectorSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DDBELTConnectionOptions m_connectionOptions;
    bool m_connectionOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
