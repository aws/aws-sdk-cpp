/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the test set that is exported.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetExportSpecification">AWS
   * API Reference</a></p>
   */
  class TestSetExportSpecification
  {
  public:
    AWS_LEXMODELSV2_API TestSetExportSpecification();
    AWS_LEXMODELSV2_API TestSetExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline TestSetExportSpecification& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline TestSetExportSpecification& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline TestSetExportSpecification& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}

  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
