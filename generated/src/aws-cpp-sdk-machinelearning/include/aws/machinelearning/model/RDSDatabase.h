/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>The database details of an Amazon RDS database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RDSDatabase">AWS
   * API Reference</a></p>
   */
  class RDSDatabase
  {
  public:
    AWS_MACHINELEARNING_API RDSDatabase() = default;
    AWS_MACHINELEARNING_API RDSDatabase(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API RDSDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an RDS DB instance.</p>
     */
    inline const Aws::String& GetInstanceIdentifier() const { return m_instanceIdentifier; }
    inline bool InstanceIdentifierHasBeenSet() const { return m_instanceIdentifierHasBeenSet; }
    template<typename InstanceIdentifierT = Aws::String>
    void SetInstanceIdentifier(InstanceIdentifierT&& value) { m_instanceIdentifierHasBeenSet = true; m_instanceIdentifier = std::forward<InstanceIdentifierT>(value); }
    template<typename InstanceIdentifierT = Aws::String>
    RDSDatabase& WithInstanceIdentifier(InstanceIdentifierT&& value) { SetInstanceIdentifier(std::forward<InstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RDSDatabase& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceIdentifier;
    bool m_instanceIdentifierHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
