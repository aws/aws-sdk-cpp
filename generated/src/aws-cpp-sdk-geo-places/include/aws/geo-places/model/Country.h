/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>The alpha-2 or alpha-3 character code for the country that the results will
   * be present in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Country">AWS
   * API Reference</a></p>
   */
  class Country
  {
  public:
    AWS_GEOPLACES_API Country();
    AWS_GEOPLACES_API Country(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Country, represented by its alpha 2-character code. </p>
     */
    inline const Aws::String& GetCode2() const{ return m_code2; }
    inline bool Code2HasBeenSet() const { return m_code2HasBeenSet; }
    inline void SetCode2(const Aws::String& value) { m_code2HasBeenSet = true; m_code2 = value; }
    inline void SetCode2(Aws::String&& value) { m_code2HasBeenSet = true; m_code2 = std::move(value); }
    inline void SetCode2(const char* value) { m_code2HasBeenSet = true; m_code2.assign(value); }
    inline Country& WithCode2(const Aws::String& value) { SetCode2(value); return *this;}
    inline Country& WithCode2(Aws::String&& value) { SetCode2(std::move(value)); return *this;}
    inline Country& WithCode2(const char* value) { SetCode2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Country, represented by its alpha t-character code. </p>
     */
    inline const Aws::String& GetCode3() const{ return m_code3; }
    inline bool Code3HasBeenSet() const { return m_code3HasBeenSet; }
    inline void SetCode3(const Aws::String& value) { m_code3HasBeenSet = true; m_code3 = value; }
    inline void SetCode3(Aws::String&& value) { m_code3HasBeenSet = true; m_code3 = std::move(value); }
    inline void SetCode3(const char* value) { m_code3HasBeenSet = true; m_code3.assign(value); }
    inline Country& WithCode3(const Aws::String& value) { SetCode3(value); return *this;}
    inline Country& WithCode3(Aws::String&& value) { SetCode3(std::move(value)); return *this;}
    inline Country& WithCode3(const char* value) { SetCode3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the country.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Country& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Country& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Country& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_code2;
    bool m_code2HasBeenSet = false;

    Aws::String m_code3;
    bool m_code3HasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
