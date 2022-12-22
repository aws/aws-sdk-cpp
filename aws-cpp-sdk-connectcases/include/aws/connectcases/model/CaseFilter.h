/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldFilter.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>A filter for cases. Only one value can be provided.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseFilter">AWS
   * API Reference</a></p>
   */
  class CaseFilter
  {
  public:
    AWS_CONNECTCASES_API CaseFilter();
    AWS_CONNECTCASES_API CaseFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline const Aws::Vector<CaseFilter>& GetAndAll() const{ return m_andAll; }

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline void SetAndAll(const Aws::Vector<CaseFilter>& value) { m_andAllHasBeenSet = true; m_andAll = value; }

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline void SetAndAll(Aws::Vector<CaseFilter>&& value) { m_andAllHasBeenSet = true; m_andAll = std::move(value); }

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline CaseFilter& WithAndAll(const Aws::Vector<CaseFilter>& value) { SetAndAll(value); return *this;}

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline CaseFilter& WithAndAll(Aws::Vector<CaseFilter>&& value) { SetAndAll(std::move(value)); return *this;}

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline CaseFilter& AddAndAll(const CaseFilter& value) { m_andAllHasBeenSet = true; m_andAll.push_back(value); return *this; }

    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline CaseFilter& AddAndAll(CaseFilter&& value) { m_andAllHasBeenSet = true; m_andAll.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of fields to filter on.</p>
     */
    inline const FieldFilter& GetField() const{ return m_field; }

    /**
     * <p>A list of fields to filter on.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>A list of fields to filter on.</p>
     */
    inline void SetField(const FieldFilter& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>A list of fields to filter on.</p>
     */
    inline void SetField(FieldFilter&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>A list of fields to filter on.</p>
     */
    inline CaseFilter& WithField(const FieldFilter& value) { SetField(value); return *this;}

    /**
     * <p>A list of fields to filter on.</p>
     */
    inline CaseFilter& WithField(FieldFilter&& value) { SetField(std::move(value)); return *this;}


    
    AWS_CONNECTCASES_API const CaseFilter& GetNot() const;

    
    AWS_CONNECTCASES_API bool NotHasBeenSet() const;

    
    AWS_CONNECTCASES_API void SetNot(const CaseFilter& value);

    
    AWS_CONNECTCASES_API void SetNot(CaseFilter&& value);

    
    AWS_CONNECTCASES_API CaseFilter& WithNot(const CaseFilter& value);

    
    AWS_CONNECTCASES_API CaseFilter& WithNot(CaseFilter&& value);

  private:

    Aws::Vector<CaseFilter> m_andAll;
    bool m_andAllHasBeenSet = false;

    FieldFilter m_field;
    bool m_fieldHasBeenSet = false;

    std::shared_ptr<CaseFilter> m_not;
    bool m_notHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
