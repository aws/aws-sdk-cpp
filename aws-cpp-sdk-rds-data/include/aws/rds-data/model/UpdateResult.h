/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/Field.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The response elements represent the results of an update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/UpdateResult">AWS
   * API Reference</a></p>
   */
  class UpdateResult
  {
  public:
    AWS_RDSDATASERVICE_API UpdateResult();
    AWS_RDSDATASERVICE_API UpdateResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API UpdateResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline const Aws::Vector<Field>& GetGeneratedFields() const{ return m_generatedFields; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline bool GeneratedFieldsHasBeenSet() const { return m_generatedFieldsHasBeenSet; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline void SetGeneratedFields(const Aws::Vector<Field>& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields = value; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline void SetGeneratedFields(Aws::Vector<Field>&& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields = std::move(value); }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline UpdateResult& WithGeneratedFields(const Aws::Vector<Field>& value) { SetGeneratedFields(value); return *this;}

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline UpdateResult& WithGeneratedFields(Aws::Vector<Field>&& value) { SetGeneratedFields(std::move(value)); return *this;}

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline UpdateResult& AddGeneratedFields(const Field& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields.push_back(value); return *this; }

    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline UpdateResult& AddGeneratedFields(Field&& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Field> m_generatedFields;
    bool m_generatedFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
