/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SchemaVersionErrorItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class DeleteSchemaVersionsResult
  {
  public:
    AWS_GLUE_API DeleteSchemaVersionsResult();
    AWS_GLUE_API DeleteSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline const Aws::Vector<SchemaVersionErrorItem>& GetSchemaVersionErrors() const{ return m_schemaVersionErrors; }

    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline void SetSchemaVersionErrors(const Aws::Vector<SchemaVersionErrorItem>& value) { m_schemaVersionErrors = value; }

    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline void SetSchemaVersionErrors(Aws::Vector<SchemaVersionErrorItem>&& value) { m_schemaVersionErrors = std::move(value); }

    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline DeleteSchemaVersionsResult& WithSchemaVersionErrors(const Aws::Vector<SchemaVersionErrorItem>& value) { SetSchemaVersionErrors(value); return *this;}

    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline DeleteSchemaVersionsResult& WithSchemaVersionErrors(Aws::Vector<SchemaVersionErrorItem>&& value) { SetSchemaVersionErrors(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline DeleteSchemaVersionsResult& AddSchemaVersionErrors(const SchemaVersionErrorItem& value) { m_schemaVersionErrors.push_back(value); return *this; }

    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline DeleteSchemaVersionsResult& AddSchemaVersionErrors(SchemaVersionErrorItem&& value) { m_schemaVersionErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SchemaVersionErrorItem> m_schemaVersionErrors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
