/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the term relations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TermRelations">AWS
   * API Reference</a></p>
   */
  class TermRelations
  {
  public:
    AWS_DATAZONE_API TermRelations();
    AWS_DATAZONE_API TermRelations(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TermRelations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The classifies of the term relations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifies() const{ return m_classifies; }
    inline bool ClassifiesHasBeenSet() const { return m_classifiesHasBeenSet; }
    inline void SetClassifies(const Aws::Vector<Aws::String>& value) { m_classifiesHasBeenSet = true; m_classifies = value; }
    inline void SetClassifies(Aws::Vector<Aws::String>&& value) { m_classifiesHasBeenSet = true; m_classifies = std::move(value); }
    inline TermRelations& WithClassifies(const Aws::Vector<Aws::String>& value) { SetClassifies(value); return *this;}
    inline TermRelations& WithClassifies(Aws::Vector<Aws::String>&& value) { SetClassifies(std::move(value)); return *this;}
    inline TermRelations& AddClassifies(const Aws::String& value) { m_classifiesHasBeenSet = true; m_classifies.push_back(value); return *this; }
    inline TermRelations& AddClassifies(Aws::String&& value) { m_classifiesHasBeenSet = true; m_classifies.push_back(std::move(value)); return *this; }
    inline TermRelations& AddClassifies(const char* value) { m_classifiesHasBeenSet = true; m_classifies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>isA</code> property of the term relations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIsA() const{ return m_isA; }
    inline bool IsAHasBeenSet() const { return m_isAHasBeenSet; }
    inline void SetIsA(const Aws::Vector<Aws::String>& value) { m_isAHasBeenSet = true; m_isA = value; }
    inline void SetIsA(Aws::Vector<Aws::String>&& value) { m_isAHasBeenSet = true; m_isA = std::move(value); }
    inline TermRelations& WithIsA(const Aws::Vector<Aws::String>& value) { SetIsA(value); return *this;}
    inline TermRelations& WithIsA(Aws::Vector<Aws::String>&& value) { SetIsA(std::move(value)); return *this;}
    inline TermRelations& AddIsA(const Aws::String& value) { m_isAHasBeenSet = true; m_isA.push_back(value); return *this; }
    inline TermRelations& AddIsA(Aws::String&& value) { m_isAHasBeenSet = true; m_isA.push_back(std::move(value)); return *this; }
    inline TermRelations& AddIsA(const char* value) { m_isAHasBeenSet = true; m_isA.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_classifies;
    bool m_classifiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_isA;
    bool m_isAHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
