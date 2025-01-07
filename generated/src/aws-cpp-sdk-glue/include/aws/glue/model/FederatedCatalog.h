/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A catalog that points to an entity outside the Glue Data
   * Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FederatedCatalog">AWS
   * API Reference</a></p>
   */
  class FederatedCatalog
  {
  public:
    AWS_GLUE_API FederatedCatalog();
    AWS_GLUE_API FederatedCatalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederatedCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the federated catalog.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline FederatedCatalog& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline FederatedCatalog& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline FederatedCatalog& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to an external data source, for example a
     * Redshift-federated catalog.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline FederatedCatalog& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline FederatedCatalog& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline FederatedCatalog& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
